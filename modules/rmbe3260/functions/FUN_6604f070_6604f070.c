/* Module: rmbe3260.dll
   Function: FUN_6604f070
   Address: 6604f070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6604f070(void *this,char *param_1)

{
  void *this_00;
  char *pcVar1;
  
  this_00 = operator_new(0x7d);
  if (this_00 == (void *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = FUN_6604eea0(this_00,param_1,this);
  }
  if (pcVar1 != (char *)0x0) {
    *(undefined4 *)(pcVar1 + 0x79) = *(undefined4 *)((int)this + 8);
    *(char **)((int)this + 8) = pcVar1;
  }
  return;
}


