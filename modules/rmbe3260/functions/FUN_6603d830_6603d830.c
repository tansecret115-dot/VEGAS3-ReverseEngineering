/* Module: rmbe3260.dll
   Function: FUN_6603d830
   Address: 6603d830
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6603d830(void *this,char *param_1)

{
  int local_10 [3];
  
  FUN_6605b7e0(local_10,param_1);
  if (*(int *)(*(int *)((int)this + 0x28) + -8) != 0) {
    FUN_6605bba0((void *)((int)this + 0x28),&DAT_6606c518);
  }
  FUN_6605bbe0((void *)((int)this + 0x28),local_10);
  FUN_6605b770(local_10);
  return;
}


