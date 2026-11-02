/* Module: vegas30k.dll
   Function: Mixer_Init
   Address: 0117cb10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_Init(unsigned long,struct HSFMETRIC__ *) */

long Mixer_Init(ulong param_1,HSFMETRIC__ *param_2)

{
  int iVar1;
  int unaff_ESI;
  
                    /* 0x17cb10  199  ?Mixer_Init@@YGJKPAUHSFMETRIC__@@@Z */
  iVar1 = (**(code **)(*DAT_012b0b2c + 0xc))(DAT_012b0b2c,&DAT_011d9c70);
  if (-1 < iVar1) {
    DAT_012b0830 = &DAT_012b09c4;
    DAT_012b09c0 = unaff_ESI;
    FUN_01181e50(&DAT_012b0838);
    if (DAT_012b09c0 != 0) {
      if (((uint)DAT_012b0830 & 0xf0000) == 0) {
        FUN_01181e70(&DAT_012b0838);
        FUN_01182540(&DAT_012b0838);
      }
      if (((uint)DAT_012b0830 & 0x300) != 0) {
        FUN_011827b0(&DAT_012b0838);
      }
    }
  }
  return iVar1;
}


