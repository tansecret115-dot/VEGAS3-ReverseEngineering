/* Module: sfcdi.dll
   Function: FUN_5bf3d750
   Address: 5bf3d750
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf3d750(undefined4 *param_1,uint param_2,LPCSTR param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  WCHAR *pWVar5;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  iVar1 = MultiByteToWideChar(0,1,param_3,-1,local_208,0x104);
  local_2 = 0;
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = iVar1 - 1;
    uVar4 = param_2;
    if (param_2 < uVar2) goto LAB_5bf3d792;
  }
  uVar4 = uVar2;
LAB_5bf3d792:
  pWVar5 = local_208;
  for (uVar3 = (uVar4 & 0x7fffffff) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *(undefined4 *)pWVar5;
    pWVar5 = (WCHAR *)((int)pWVar5 + 4);
    param_1 = param_1 + 1;
  }
  for (uVar4 = uVar4 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)pWVar5;
    pWVar5 = (WCHAR *)((int)pWVar5 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  if (param_2 < uVar2) {
    uVar2 = param_2;
  }
  return uVar2;
}


