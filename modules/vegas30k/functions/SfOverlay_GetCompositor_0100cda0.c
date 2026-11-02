/* Module: vegas30k.dll
   Function: SfOverlay_GetCompositor
   Address: 0100cda0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct tSFOVERLAY const * __stdcall SfOverlay_GetCompositor(struct _GUID *) */

tSFOVERLAY * SfOverlay_GetCompositor(_GUID *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  int iVar5;
  byte *pbVar6;
  _GUID *p_Var7;
  bool bVar8;
  bool bVar9;
  byte local_10 [16];
  
                    /* 0xcda0  471  ?SfOverlay_GetCompositor@@YGPBUtSFOVERLAY@@PAU_GUID@@@Z */
  iVar5 = 0;
  ppuVar4 = &PTR_FUN_01204028;
  do {
    iVar2 = (*(code *)*ppuVar4)(0,0,local_10);
    if (-1 < iVar2) {
      iVar3 = 0x10;
      bVar8 = false;
      iVar2 = 0;
      bVar9 = true;
      pbVar6 = local_10;
      p_Var7 = param_1;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar1 = (byte)p_Var7->Data1;
        bVar8 = *pbVar6 < bVar1;
        bVar9 = *pbVar6 == bVar1;
        pbVar6 = pbVar6 + 1;
        p_Var7 = (_GUID *)((int)&p_Var7->Data1 + 1);
      } while (bVar9);
      if (!bVar9) {
        iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      }
      if (iVar2 == 0) {
        return (tSFOVERLAY *)(&PTR_LAB_01204020 + iVar5 * 3);
      }
    }
    ppuVar4 = ppuVar4 + 3;
    iVar5 = iVar5 + 1;
    if ((undefined **)0x120409f < ppuVar4) {
      return (tSFOVERLAY *)0x0;
    }
  } while( true );
}


