/* Module: vidcap30.exe
   Function: FUN_0042de70
   Address: 0042de70
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0042de70(LPSTR param_1,int param_2,int param_3)

{
  char *lpString2;
  LPSTR pCVar1;
  
  if (param_3 < 0x1001) {
    if (param_3 == 0x1000) {
      lpString2 = "Audio Tuner";
      goto LAB_0042df62;
    }
    switch(param_3) {
    case 1:
      lpString2 = "Video Tuner";
      break;
    case 2:
      lpString2 = "Video Composite";
      break;
    case 3:
      lpString2 = "Video SVideo";
      break;
    case 4:
      lpString2 = "Video RGB";
      break;
    case 5:
      lpString2 = "Video YRYBY";
      break;
    case 6:
      lpString2 = "Video SerialDigital";
      break;
    case 7:
      lpString2 = "Video ParallelDigital";
      break;
    case 8:
      lpString2 = "Video SCSI";
      break;
    case 9:
      lpString2 = "Video AUX";
      break;
    case 10:
      lpString2 = "Video 1394";
      break;
    case 0xb:
      lpString2 = "Video USB";
      break;
    case 0xc:
      lpString2 = "Video Decoder";
      break;
    case 0xd:
      lpString2 = "Video Encoder";
      break;
    default:
      goto switchD_0042de8f_default;
    }
  }
  else {
    switch(param_3) {
    case 0x1001:
      lpString2 = "Audio Line";
      break;
    case 0x1002:
      lpString2 = "Audio Mic";
      break;
    case 0x1003:
      lpString2 = "Audio AESDigital";
      break;
    case 0x1004:
      lpString2 = "Audio SPDIFDigital";
      break;
    case 0x1005:
      lpString2 = "Audio SCSI";
      break;
    case 0x1006:
      lpString2 = "Audio AUX";
      break;
    case 0x1007:
      lpString2 = "Audio 1394";
      break;
    case 0x1008:
      lpString2 = "Audio USB";
      break;
    case 0x1009:
      lpString2 = "Audio Decoder";
      break;
    default:
switchD_0042de8f_default:
      lpString2 = "Unknown";
    }
  }
LAB_0042df62:
  pCVar1 = lstrcpynA(param_1,lpString2,param_2);
  return pCVar1 != (LPSTR)0x0;
}


