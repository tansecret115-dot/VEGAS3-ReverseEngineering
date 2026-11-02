/* Module: sfcdi.dll
   Function: FUN_5bf3d670
   Address: 5bf3d670
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf3d670(uchar *param_1,uint param_2,uchar *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uchar *puVar4;
  uchar local_104 [260];
  
  _mbscpy(local_104,param_3);
  uVar1 = lstrlenA((LPCSTR)local_104);
  uVar3 = param_2;
  if (uVar1 <= param_2) {
    uVar3 = uVar1;
  }
  puVar4 = local_104;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)puVar4;
    puVar4 = puVar4 + 4;
    param_1 = param_1 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *puVar4;
    puVar4 = puVar4 + 1;
    param_1 = param_1 + 1;
  }
  if (param_2 < uVar1) {
    uVar1 = param_2;
  }
  return uVar1;
}


