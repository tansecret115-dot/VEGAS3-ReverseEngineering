/* Module: sfcdi.dll
   Function: FUN_5bf41a70
   Address: 5bf41a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf41a70(int param_1,byte param_2,byte *param_3,char *param_4,char *param_5)

{
  byte *pbVar1;
  byte bVar2;
  
  pbVar1 = param_3;
  bVar2 = 0;
  *param_3 = 0;
  *param_4 = '\0';
  *param_5 = '\0';
  param_3 = (byte *)0x0;
  if (param_2 != 0) {
    do {
      if ((param_3[param_1] == 0x2e) || (param_3[param_1] == 0x3b)) break;
      bVar2 = bVar2 + 1;
      param_3 = (byte *)(uint)bVar2;
    } while (bVar2 < param_2);
  }
  *pbVar1 = bVar2;
  if (bVar2 < param_2) {
    if (param_3[param_1] == 0x2e) {
      do {
        if (param_3[param_1] == 0x3b) break;
        bVar2 = bVar2 + 1;
        param_3 = (byte *)(uint)bVar2;
      } while (bVar2 < param_2);
      *param_4 = bVar2 - *pbVar1;
    }
    if ((bVar2 < param_2) && (param_3[param_1] == 0x3b)) {
      *param_5 = param_2 - *param_4;
    }
  }
  return 0;
}


