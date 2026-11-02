/* Module: vegas30.exe
   Function: FUN_004282d0
   Address: 004282d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004282d0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  uint local_120;
  undefined1 local_11c [276];
  int local_8;
  
  FUN_004ec4f0(param_1,0,&local_120,1);
  if ((local_120 & 0x80) == 0) {
    if (((((local_120 & 0x100) != 0) && (*param_1 != 0)) && (*(int *)param_1[2] != 0)) &&
       (iVar2 = *(int *)(*(int *)param_1[2] + 0x20c), iVar2 != 0)) {
      _FXPackage_GetPackageInfo_20
                (*(undefined4 *)(iVar2 + 0x10c),*(undefined4 *)(iVar2 + 0x110),
                 *(undefined4 *)(iVar2 + 0x114),*(undefined4 *)(iVar2 + 0x118),local_11c);
      if (local_8 == 5) {
        return 2;
      }
    }
  }
  else if ((((*param_1 != 0) && (*(int *)param_1[2] != 0)) &&
           ((puVar1 = *(uint **)(*(int *)param_1[2] + 0x20c), puVar1 != (uint *)0x0 &&
            (((*puVar1 & 4) == 0 && ((*puVar1 & 1) != 0)))))) && (*(int *)(puVar1[1] + 0x10) != 5))
  {
    return 1;
  }
  return 0;
}


