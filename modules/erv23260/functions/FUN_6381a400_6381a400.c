/* Module: erv23260.dll
   Function: FUN_6381a400
   Address: 6381a400
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_6381a400(void)

{
  int in_EAX;
  uint unaff_EBX;
  
  if (DAT_6383201c == 0) {
    _DAT_63831ff0 = &LAB_6381a62a;
    _DAT_63831ff4 = &DAT_6381a4cf;
    _DAT_63831ff8 = &DAT_6381a500;
    _DAT_63831ffc = &LAB_6381a62a;
    _DAT_63832000 = &DAT_6381a49c;
    _DAT_63832004 = &DAT_6381a537;
    _DAT_63832008 = &DAT_6381a572;
    _DAT_6383200c = &LAB_6381a62a;
    _DAT_63832010 = &DAT_6381a4b4;
    _DAT_63832014 = &DAT_6381a5b2;
    _DAT_63832018 = &DAT_6381a5eb;
    DAT_6383201c = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x6381a49a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_63831ff0 + (unaff_EBX & *(uint *)(&DAT_6382aaf8 + in_EAX * 4)) * 4))();
  return;
}


