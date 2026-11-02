/* Module: rmbe3260.dll
   Function: FUN_660274c0
   Address: 660274c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_660274c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_66014c40(param_1);
  param_1[0x23] = &PTR_LAB_66067660;
  param_1[0x24] = &PTR_LAB_66067648;
  param_1[0x25] = &PTR_LAB_66067638;
  param_1[0x26] = &PTR_LAB_66067608;
  param_1[0x27] = &PTR_LAB_660675f8;
  puVar2 = param_1 + 0x2f;
  iVar1 = 9;
  do {
    FUN_6605cda0(puVar2);
    puVar2 = puVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_6602afa0(param_1 + 0x53);
  FUN_660516d0(param_1 + 0x7e);
  FUN_6605b650(param_1 + 0x84);
  *param_1 = &PTR_FUN_66067578;
  param_1[0x12] = &PTR_LAB_66067548;
  param_1[0x23] = &PTR_LAB_66067530;
  param_1[0x24] = &PTR_LAB_66067518;
  param_1[0x25] = &PTR_LAB_66067508;
  param_1[0x26] = &PTR_LAB_660674d8;
  param_1[0x27] = &PTR_LAB_660674c8;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x89] = 0;
  param_1[0x28] = 0;
  FUN_6605b970(param_1 + 3,s_video_x_pn_realvideo_6606cde8);
  FUN_6605b970(param_1 + 0x1a,s_VideoStreams_6606de44);
  iVar1 = FUN_66019900((byte *)param_1[3],param_1 + 8);
  param_1[0x7a] = 0;
  if (-1 < iVar1) {
    FUN_6604ee00(param_1 + 0x7e,4,s_RNColorCreateImageManipulator2_6606de24,(int)(param_1 + 0x7a));
  }
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  return param_1;
}


