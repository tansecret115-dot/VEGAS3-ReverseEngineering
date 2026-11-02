/* Module: g2plug.dll
   Function: FUN_5f810f10
   Address: 5f810f10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f810f10(HKEY param_1,int *param_2,uint param_3,HKEY param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  LSTATUS LVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0;
  uVar1 = *(uint *)(param_3 + 0x20);
  uVar2 = *(uint *)(param_3 + 0x1c);
  uVar7 = 0;
  LVar5 = RegCreateKeyA(param_1,(LPCSTR)param_4,&param_4);
  if (LVar5 != 0) {
    return 0x80004005;
  }
  param_3 = 0;
  do {
    if (uVar2 <= param_3) break;
    iVar3 = *param_2;
    iVar4 = *param_2;
    uVar7 = FUN_5f810df0(param_4,(int)param_2,(int *)((int)param_2 + iVar3));
    uVar6 = uVar6 + iVar4 + param_2[0x12];
    param_2 = (int *)((int)param_2 + iVar3 + param_2[0x12]);
    if (uVar1 < uVar6) {
      uVar7 = 0x80070057;
    }
    param_3 = param_3 + 1;
  } while (-1 < (int)uVar7);
  RegCloseKey(param_4);
  return uVar7;
}


