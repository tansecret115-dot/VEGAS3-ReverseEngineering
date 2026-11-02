/* Module: vegas30.exe
   Function: FUN_005e9e80
   Address: 005e9e80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005e9e80(int *param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  LPSTREAM pstm;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  HRESULT HVar6;
  LPVOID pvVar7;
  int local_4;
  
  piVar3 = param_4;
  iVar5 = param_2;
  local_4 = 0;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *param_4 = 0;
  iVar4 = FUN_005b8630(uVar1);
  if (*(int *)(iVar4 + 0x3f4) == 0) {
    piVar2 = *(int **)(iVar5 + 0x234);
    if (piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    if ((param_3 < 0) || (iVar5 + -1 < param_3)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(piVar2[2] + param_3 * 4);
    }
    if (iVar5 == 0) {
      return -0x7fff0001;
    }
    iVar5 = FUN_005badc0(iVar5,0x2b,0,param_1,0,&local_4);
  }
  else {
    pstm = *(LPSTREAM *)(iVar4 + 0x3f0);
    param_4 = (HGLOBAL)0x0;
    param_2 = 0;
    iVar5 = FUN_005bad70(pstm,&param_2);
    if (iVar5 < 0) {
      return iVar5;
    }
    HVar6 = GetHGlobalFromStream(pstm,&param_4);
    if (HVar6 < 0) {
      return HVar6;
    }
    pvVar7 = GlobalLock(param_4);
    if (pvVar7 == (LPVOID)0x0) {
      return -0x7ff8fffa;
    }
    iVar5 = (**(code **)(*param_1 + 0x10))(param_1,pvVar7,param_2,0);
    local_4 = param_2;
    GlobalUnlock(param_4);
  }
  if (-1 < iVar5) {
    *piVar3 = *piVar3 + local_4;
  }
  return iVar5;
}


