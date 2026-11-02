/* Module: vegas30k.dll
   Function: Transport_SetRate
   Address: 0117f340
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_SetRate(double,unsigned long) */

long Transport_SetRate(double param_1,ulong param_2)

{
  int *piVar1;
  long lVar2;
  undefined4 unaff_retaddr;
  undefined1 local_8 [4];
  undefined4 uStack_4;
  
                    /* 0x17f340  570  ?Transport_SetRate@@YGJNK@Z */
  piVar1 = DAT_012b0b2c;
  (**(code **)(*DAT_012b0b2c + 0x8c))();
  if ((double)CONCAT44(unaff_retaddr,uStack_4) == (double)CONCAT44(local_8,piVar1)) {
    return 1;
  }
  lVar2 = (**(code **)(*DAT_012b0b2c + 0x88))(DAT_012b0b2c,uStack_4,unaff_retaddr,param_1._0_4_);
  return lVar2;
}


