/* Module: encn3260.dll
   Function: FUN_6648b0c0
   Address: 6648b0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6648b0c0(void *this,undefined4 *param_1,uint param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar1 = (*(code *)**(undefined4 **)this)();
  if (1 < uVar1) {
    uVar2 = (*(code *)**(undefined4 **)this)();
    FUN_664be860((int)this,(uint)((ulonglong)uVar2 >> 0x20),param_1,(int)uVar2 * param_2);
    return;
  }
  FUN_664be860((int)this,(uint)param_1,param_1,param_2);
  return;
}


