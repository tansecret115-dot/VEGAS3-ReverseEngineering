/* Module: rmbe3260.dll
   Function: FUN_66019650
   Address: 66019650
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66019650(void *this,int *param_1)

{
  byte *local_18 [3];
  int local_c;
  undefined4 local_8;
  
  (**(code **)(param_1[4] + 0x14))(param_1 + 4,&local_c);
  FUN_66016940(local_18,local_c,local_8);
  if (*(int *)(local_18[0] + -8) != 0) {
    (**(code **)(*param_1 + 4))(param_1);
    FUN_6605c9a0((void *)((int)this + 0x14),local_18[0],(int)param_1);
  }
  FUN_6605b770((int *)local_18);
  return;
}


