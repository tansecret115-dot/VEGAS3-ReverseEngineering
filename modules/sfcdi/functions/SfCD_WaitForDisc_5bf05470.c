/* Module: sfcdi.dll
   Function: SfCD_WaitForDisc
   Address: 5bf05470
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfCD_WaitForDisc(struct HSFCD__ *,unsigned int,unsigned long,struct _mediainfo *)
    */

int SfCD_WaitForDisc(HSFCD__ *param_1,uint param_2,ulong param_3,_mediainfo *param_4)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  _mediainfo *p_Var4;
  _mediainfo *p_Var5;
  _mediainfo local_2c [44];
  
                    /* 0x5470  62  ?SfCD_WaitForDisc@@YGHPAUHSFCD__@@IKPAU_mediainfo@@@Z */
  DVar1 = timeGetTime();
  while( true ) {
    cdr_GetMediaInfo(param_1,local_2c);
    if (param_4 != (_mediainfo *)0x0) {
      p_Var4 = local_2c;
      p_Var5 = param_4;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)p_Var5 = *(undefined4 *)p_Var4;
        p_Var4 = p_Var4 + 4;
        p_Var5 = p_Var5 + 4;
      }
    }
    iVar3 = SfCD_TestDiscType(local_2c,1);
    if (iVar3 != 0) break;
    DVar2 = timeGetTime();
    if (DVar1 + param_3 <= DVar2) {
      return 0;
    }
  }
  iVar3 = SfCD_TestDiscType(local_2c,param_2);
  return iVar3;
}


