/* Module: mp3plug.dll
   Function: FUN_5f6895c0
   Address: 5f6895c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6895c0(uint param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_1 < 0x4e454c55) {
    if (param_1 == 0x4e454c54) {
      pcVar4 = "TLEN";
    }
    else if (param_1 == 0x43525349) {
      pcVar4 = "TALB";
    }
    else if (param_1 == 0x44524349) {
      pcVar4 = "TYER";
    }
    else {
      if (param_1 != 0x4d414e49) {
        return 0x8004e00a;
      }
      pcVar4 = "TIT2";
    }
  }
  else if (param_1 == 0x504f4349) {
    pcVar4 = "TCOP";
  }
  else if (param_1 == 0x524e4749) {
    pcVar4 = "TCON";
  }
  else {
    if (param_1 != 0x54524149) {
      return 0x8004e00a;
    }
    pcVar4 = "TPE1";
  }
  uVar2 = 0xffffffff;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)param_2 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    param_2 = param_2 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    param_2 = param_2 + 1;
  }
  return 0;
}


