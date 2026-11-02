/* Module: vegas30k.dll
   Function: SfPlugIn_UpdateTrackFlags
   Address: 0102b6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct tSFPLUGIN_LIST_NODE * __stdcall SfPlugIn_UpdateTrackFlags(struct tSFPLUGIN_LIST_NODE
   *,int) */

tSFPLUGIN_LIST_NODE * SfPlugIn_UpdateTrackFlags(tSFPLUGIN_LIST_NODE *param_1,int param_2)

{
  tSFPLUGIN_LIST_NODE *ptVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
                    /* 0x2b6c0  492  ?SfPlugIn_UpdateTrackFlags@@YGPAUtSFPLUGIN_LIST_NODE@@PAU1@H@Z
                        */
  iVar2 = param_2;
  for (ptVar1 = param_1; ptVar1 != (tSFPLUGIN_LIST_NODE *)0x0;
      ptVar1 = *(tSFPLUGIN_LIST_NODE **)ptVar1) {
    uVar4 = *(uint *)(ptVar1 + 0xc);
    *(uint *)(ptVar1 + 0xc) = uVar4 & 0xffdfffff;
    if ((uVar4 & 0x1c00000) == 0) {
      SfPlugIn_MiniProg_UpdateMiniProgress((char *)(ptVar1 + 0x20));
      if (iVar2 != 0) {
        uVar4 = *(uint *)(ptVar1 + 0xc);
        *(uint *)(ptVar1 + 0xc) = uVar4 | 0x400000;
        SfPlugIn_SetFlags((_GUID *)(ptVar1 + 0x10),uVar4 | 0x400000,1);
      }
      param_2 = 0;
      param_1 = (tSFPLUGIN_LIST_NODE *)0x0;
      uVar3 = FUN_0102b780(ptVar1,&param_2,&param_1);
      uVar4 = *(uint *)(ptVar1 + 0xc);
      uVar3 = (uVar3 & 1) << 2;
      *(uint *)(ptVar1 + 0xc) = uVar3 | uVar4 & 0xfffffffb;
      if (iVar2 != 0) {
        uVar4 = (uint)(param_1 != (tSFPLUGIN_LIST_NODE *)0x0) << 0x16 | uVar3 | uVar4 & 0xffbffffb;
        *(uint *)(ptVar1 + 0xc) = uVar4;
        SfPlugIn_SetFlags((_GUID *)(ptVar1 + 0x10),uVar4,1);
      }
    }
  }
  _fpreset();
  return (tSFPLUGIN_LIST_NODE *)0x0;
}


