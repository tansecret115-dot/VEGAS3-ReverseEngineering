/* Module: rmto3260.dll
   Function: FUN_662c7170
   Address: 662c7170
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_662c7170(byte *param_1,uint param_2,byte *param_3,uint param_4)

{
  int iVar1;
  short sVar2;
  short local_8;
  
  iVar1 = 0;
  if (param_2 != 0) {
    local_8 = CONCAT11(param_1[4],param_1[5]);
  }
  sVar2 = local_8;
  if (param_4 != 0) {
    sVar2 = CONCAT11(param_3[4],param_3[5]);
  }
  if (local_8 != sVar2) {
    iVar1 = -0x7ffbfc39;
  }
  if (-1 < iVar1) {
    if (local_8 != 3) {
      if (local_8 == 4) {
        iVar1 = FUN_662c7440(param_1,param_2,param_3,param_4);
        return iVar1;
      }
      if (local_8 == 5) {
        iVar1 = FUN_662c7870((int)param_1,param_2,(int)param_3,param_4);
        return iVar1;
      }
      return -0x7ffbfc3a;
    }
    iVar1 = FUN_662c7230();
  }
  return iVar1;
}


