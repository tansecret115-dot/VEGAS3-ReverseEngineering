/* Module: encn3260.dll
   Function: FUN_6648e380
   Address: 6648e380
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6648e380(int param_1)

{
  int iVar1;
  void *this;
  DWORD DVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  this = operator_new(0x44);
  if (this != (void *)0x0) {
    iVar1 = *(int *)(param_1 + 0x30);
    DVar2 = GetTickCount();
    uVar3 = FUN_664d1bc0(DVar2);
    puVar4 = FUN_664d9310(this,iVar1,(uint)(iVar1 == 0),uVar3);
    *(undefined4 **)(param_1 + 0x8d) = puVar4;
    return;
  }
  *(undefined4 *)(param_1 + 0x8d) = 0;
  return;
}


