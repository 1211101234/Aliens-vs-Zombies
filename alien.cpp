void alienHealthdisplay(int alienHealth){
    cout << endl;
    cout << "ALIENS HEALTH:   " << alienHealth << endl;
}

void alien_Health(bool healthPod){
    if (healthPod == true){
        int alienHealth = alienHealth + 20;
        alienHealthdisplay(alienHealth);
    }
}
//not completed but worth the try
