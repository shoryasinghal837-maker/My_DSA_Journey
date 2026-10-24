class Solution {
public:
    int findDay(string Givendate,vector<int>&cumulativeDay){
        int month = stoi(Givendate.substr(0,2));
        int date = stoi(Givendate.substr(3));
        return cumulativeDay[month-1]+date;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int>days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        vector<int>cumulativeDay(13,0);
        cumulativeDay[1] = 31;
        for(int i=2;i<=12;i++){
            cumulativeDay[i] = cumulativeDay[i-1]+days[i-1];
        }
        int arriveAliceDay = findDay(arriveAlice,cumulativeDay);
        int leaveAliceDay = findDay(leaveAlice,cumulativeDay);
        int arriveBobDay = findDay(arriveBob,cumulativeDay);
        int leaveBobDay = findDay(leaveBob,cumulativeDay);
        int overlapDays = min(leaveAliceDay,leaveBobDay)-max(arriveAliceDay,arriveBobDay)+1;
        return (overlapDays<0)?0:overlapDays;
    }
};