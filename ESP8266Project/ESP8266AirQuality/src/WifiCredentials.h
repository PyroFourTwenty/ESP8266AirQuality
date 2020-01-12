
IPAddress targetIp;
String ssid;
String password;
class WifiCredentials
{
    public:
        void setup(String  newSsid, String newPassword, IPAddress newTargetIp ){
            ssid = newSsid;
            password = newPassword;
            targetIp = newTargetIp;
        }

        String getSsid(){
            return ssid;
        }

        IPAddress getTargetIp(){
            return targetIp;
        }
        
        String getPassword(){
            return password;
        }

        String getTargetIpString(){
            return targetIp.toString();
        }

        bool ipIsSet(){
            return targetIp.isSet();
        }

        void printWifiCredentials(){
            Serial.print("SSID: ");
            Serial.println(ssid);
            Serial.print("Password: ");
            Serial.println(password);
            Serial.print("Target IP: ");
            Serial.println(targetIp);
        }

};