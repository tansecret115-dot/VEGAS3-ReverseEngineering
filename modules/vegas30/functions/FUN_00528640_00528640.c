/* Module: vegas30.exe
   Function: FUN_00528640
   Address: 00528640
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00528640(uint *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined1 local_11c [280];
  int local_4;
  
  puVar2 = param_1;
  for (iVar1 = 0x47; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = (*param_1 ^ param_2[0x45]) & 1 ^ *param_1;
  if ((param_2[0x45] & 1) == 0) {
    _FXPackage_GetPackageInfo_20(*param_2,param_2[1],param_2[2],param_2[3],local_11c);
    *param_1 = ((local_4 << 0x1f) >> 0x1e ^ *param_1) & 2 ^ *param_1;
  }
  else {
    _FXPackage_GetPackageInfo_20(*param_2,param_2[1],param_2[2],param_2[3],local_11c);
    *param_1 = *param_1 | 1;
  }
  param_1[0x43] = *param_2;
  param_1[0x44] = param_2[1];
  param_1[0x45] = param_2[2];
  param_1[0x46] = param_2[3];
  lstrcpynA((LPSTR)(param_1 + 2),(LPCSTR)(param_2 + 4),0x104);
  *(undefined1 *)((int)param_1 + 0x10b) = 0;
  return;
}


