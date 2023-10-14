int appleCount = 0;
int orangeCount = 0;

    for (int i : apples) {
        
        if (a +i>= s && a +i<= t) {
            appleCount++;
        }
    }

    for (int j : oranges) {
        if (b+j>= s && b+j<= t) {
            orangeCount++;
        }
    }

    cout << appleCount << endl;
    cout << orangeCount << endl;
}
