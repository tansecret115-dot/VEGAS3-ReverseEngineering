/* Module: wmfplug2.dll
   Function: FUN_0041d3a0
   Address: 0041d3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0041d3a0(undefined4 param_1,HKEY param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  uVar3 = param_3;
  uVar5 = 0;
  uVar4 = 0;
  if (((*(int *)(param_3 + 0x14) != 0) &&
      (uVar4 = FUN_0041d760(param_2,s_Version_0048892c,(LPBYTE)&param_3), -1 < (int)uVar4)) &&
     (*(uint *)(uVar3 + 0x18) <= param_3)) {
    return 0;
  }
  piVar6 = param_4;
  for (param_3 = 0; (-1 < (int)uVar4 && (param_3 < *(uint *)(uVar3 + 0x1c))); param_3 = param_3 + 1)
  {
    iVar1 = *piVar6;
    iVar2 = *piVar6;
    uVar4 = FUN_0041d430(param_2,(int)piVar6,(int *)((int)piVar6 + iVar1));
    uVar5 = uVar5 + iVar2 + piVar6[0x12];
    piVar6 = (int *)((int)piVar6 + iVar1 + piVar6[0x12]);
    if (*(uint *)(uVar3 + 0x20) < uVar5) {
      uVar4 = 0x80070057;
    }
  }
  return uVar4;
}


