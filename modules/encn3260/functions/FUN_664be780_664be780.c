/* Module: encn3260.dll
   Function: FUN_664be780
   Address: 664be780
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664be780(void *this,undefined4 *param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = (*(code *)**(undefined4 **)this)();
  if (1 < uVar1) {
    iVar2 = (*(code *)**(undefined4 **)this)();
    FUN_664be9c0(this,param_1,iVar2 * param_2);
    return;
  }
  FUN_664be9c0(this,param_1,param_2);
  return;
}


