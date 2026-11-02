/* Module: encn3260.dll
   Function: FUN_664a0ea0
   Address: 664a0ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664a0ea0(void *this,undefined4 param_1,undefined4 param_2,int *param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int nWidth;
  int nHeight;
  undefined4 uVar5;
  int local_24;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  void *local_8;
  
  local_8 = this;
  if (param_3 == (int *)0x0) {
    puVar3 = FUN_664a0c40(this,&local_18);
    uVar2 = *puVar3;
    uVar5 = puVar3[1];
  }
  else {
    uVar2 = 0;
    uVar5 = 0;
  }
  if (*(int *)((int)local_8 + 0x4c) == 0) {
    FUN_664a0d60(local_8,&local_10,param_3);
    local_24 = local_c;
    nWidth = ftol();
    nHeight = ftol();
  }
  else {
    local_18 = uVar2;
    local_14 = uVar5;
    iVar4 = ftol();
    nWidth = ftol();
    local_24 = ftol();
    nHeight = ftol();
    local_10 = iVar4;
  }
  pvVar1 = local_8;
  MoveWindow(*(HWND *)((int)local_8 + 0xf1),local_10,local_24,nWidth,nHeight,1);
  *(undefined4 *)((int)pvVar1 + 0x115) = param_1;
  *(undefined4 *)((int)pvVar1 + 0x119) = param_2;
  return;
}


