String command;
String my_name;
 
void setup() {
    Serial.begin(9600); 

    Serial.println("Welcome Azzam!");
    Serial.println("Example Input Keyboard to Arduino");
}
 
void loop() {
    if(Serial.available()){
        command = Serial.readStringUntil('\n');

        Serial.print(" You've just typed: " );
        Serial.println(command);

        if(command.equals("init")){
            Serial.println("  Initialization the program");
        }
        else if(command.equals("send")){
            Serial.println("  Sending your messages");
        }
        else if(command.equals("data")){
            Serial.println("  Sending your data");
        }
        else if(command.equals("reboot")){
            Serial.println("  Reboot will started");
        }
        else{
            Serial.println("No command listed");
        }
    }
}
