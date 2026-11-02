/* Module: Setup.exe
   Function: SfPrintF
   Address: 004075f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl SfPrintF(uchar *param_1,BYTE *param_2)

{
                    /* 0x75f0  309  SfPrintF */
  _SfVPrintF_12(param_1,param_2,(uint *)&stack0x0000000c);
  return;
}


