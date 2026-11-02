/* Module: encn3260.dll
   Function: FUN_664d94f0
   Address: 664d94f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664d94f0(void *this,uint param_1,ushort param_2,int param_3,int param_4)

{
  undefined2 *this_00;
  int iVar1;
  int iVar2;
  
  this_00 = FUN_664d9b50(this,param_1);
  iVar2 = param_4 - param_3;
  *(undefined4 *)(this_00 + 0x15) = 1;
  if (*(int *)(this_00 + 7) == 0) {
    FUN_664d9cb0(this_00,param_2);
    *(int *)(this_00 + 0x11) = iVar2;
  }
  FUN_664d9ce0(this_00,param_2);
  iVar1 = iVar2 - *(int *)(this_00 + 0x11);
  *(int *)(this_00 + 0x11) = iVar2;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  *(uint *)(this_00 + 0x13) =
       (iVar1 - (*(int *)(this_00 + 0x13) + 8U >> 4)) + *(int *)(this_00 + 0x13);
  return;
}


