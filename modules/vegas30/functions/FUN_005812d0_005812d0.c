/* Module: vegas30.exe
   Function: FUN_005812d0
   Address: 005812d0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_005812d0(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined4 local_4;
  
  iVar2 = *param_1;
  iVar4 = 0;
  local_4 = 0;
  for (iVar3 = _ismbcspace((int)*(char *)(*param_2 + iVar2)); iVar3 != 0;
      iVar3 = _ismbcspace((int)*(char *)(iVar3 + 1 + iVar2))) {
    iVar3 = *param_2;
    *param_2 = iVar3 + 1;
  }
  *param_3 = *param_2;
  while( true ) {
    cVar1 = *(char *)(*param_3 + iVar2);
    if (cVar1 == '\0') break;
    if (cVar1 == '\"') {
      local_4 = local_4 + 1;
    }
    if (cVar1 == '(') {
      uVar5 = local_4 & 0x80000001;
      bVar6 = uVar5 == 0;
      if ((int)uVar5 < 0) {
        bVar6 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar6) {
        iVar4 = iVar4 + 1;
      }
    }
    if (cVar1 == ')') {
      uVar5 = local_4 & 0x80000001;
      bVar6 = uVar5 == 0;
      if ((int)uVar5 < 0) {
        bVar6 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar6) {
        iVar4 = iVar4 + -1;
      }
    }
    if (cVar1 == ' ') {
      uVar5 = local_4 & 0x80000001;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
      }
      if ((uVar5 == 0) && (iVar4 == 0)) break;
    }
    *param_3 = *param_3 + 1;
  }
  return *param_2 != *param_3;
}


