/* Module: rmbe3260.dll
   Function: FUN_66045e10
   Address: 66045e10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66045e10(void *this,void *param_1,void *param_2)

{
  void *this_00;
  char *pcVar1;
  void *extraout_ECX;
  void *extraout_ECX_00;
  undefined *puVar2;
  
  this_00 = param_2;
  puVar2 = (undefined *)0x0;
  do {
    pcVar1 = FUN_6604b200(param_1,CONCAT22((short)((uint)this >> 0x10),
                                           *(undefined2 *)((int)this_00 + 8)),puVar2,
                          (short *)((int)&param_2 + 2));
    this = extraout_ECX;
    if ((pcVar1 != (char *)0x0) && (param_2._2_2_ != 0)) {
      pcVar1 = (char *)FUN_66046ab0(this_00,puVar2,pcVar1);
      this = extraout_ECX_00;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x15);
  pcVar1 = FUN_6604b200(param_1,CONCAT22((short)((uint)pcVar1 >> 0x10),
                                         *(undefined2 *)((int)this_00 + 8)),(undefined *)0x3e8,
                        (short *)((int)&param_2 + 2));
  if ((pcVar1 != (char *)0x0) || (param_2._2_2_ != 0)) {
    FUN_66046ab0(this_00,puVar2,pcVar1);
  }
  return 0;
}


