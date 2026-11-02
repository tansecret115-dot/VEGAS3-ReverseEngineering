/* Module: vegas30.exe
   Function: FUN_004af5c0
   Address: 004af5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004af5c0(int *param_1,int param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint local_120;
  undefined1 local_11c [276];
  int local_8;
  
  FUN_004ec4f0(param_1,0,&local_120,1);
  if ((local_120 & 0x80) == 0) {
    if (((((local_120 & 0x100) != 0) && (*param_1 != 0)) && (*(int *)param_1[2] != 0)) &&
       ((pbVar2 = *(byte **)(*(int *)param_1[2] + 0x20c), pbVar2 != (byte *)0x0 &&
        ((*pbVar2 & 1) != 0)))) {
      _FXPackage_GetPackageInfo_20
                (*(undefined4 *)(pbVar2 + 0x10c),*(undefined4 *)(pbVar2 + 0x110),
                 *(undefined4 *)(pbVar2 + 0x114),*(undefined4 *)(pbVar2 + 0x118),local_11c);
      if ((param_2 != 0) && ((local_8 == 5 || (local_8 == 6)))) {
        return 2;
      }
      if (local_8 == 5) {
        return 2;
      }
    }
  }
  else if (((((*param_1 != 0) && (*(int *)param_1[2] != 0)) &&
            (puVar1 = *(uint **)(*(int *)param_1[2] + 0x20c), puVar1 != (uint *)0x0)) &&
           (((*puVar1 & 4) == 0 && ((*puVar1 & 1) != 0)))) &&
          ((param_2 != 0 || (*(int *)(puVar1[1] + 0x10) != 5)))) {
    return 1;
  }
  return 0;
}


