/* Module: encn3260.dll
   Function: FUN_66493740
   Address: 66493740
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_66493740(void *this,undefined4 *param_1,int *param_2,undefined1 param_3,int *param_4)

{
  *(int **)((int)this + 0x70) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  *(int **)((int)this + 0x14) = param_4;
  (**(code **)(*param_4 + 4))(param_4);
  *(undefined1 *)((int)this + 0x74) = param_3;
  (**(code **)*param_1)(param_1,&DAT_664dc6a0,(int)this + 0x89);
  FUN_6648e120(this,param_1);
  return;
}


