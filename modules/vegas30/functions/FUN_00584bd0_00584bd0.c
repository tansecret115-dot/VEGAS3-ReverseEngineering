/* Module: vegas30.exe
   Function: FUN_00584bd0
   Address: 00584bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

undefined4 __fastcall FUN_00584bd0(int param_1)

{
  HIMAGELIST himl;
  int aiStack_44 [2];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  HIMAGELIST p_Stack_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    return 0x8004e01b;
  }
  himl = (HIMAGELIST)(**(code **)(*DAT_0065a054 + 0x14))(0);
  if (himl != (HIMAGELIST)0x0) {
    aiStack_44[0] = 0;
    aiStack_44[1] = 0;
    uStack_3c = 0;
    ImageList_GetIconSize(himl,(int *)&stack0xffffffb8,aiStack_44);
    ImageList_GetIconSize(*(HIMAGELIST *)(param_1 + 0x5c),aiStack_44 + 1,aiStack_44 + 2);
    iStack_34 = 0;
    iStack_2c = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    iStack_24 = 0;
    p_Stack_28 = (HIMAGELIST)0x0;
    iStack_1c = 0;
    uStack_14 = 0;
    uStack_18 = 0;
    uStack_8 = 0;
    uStack_c = 0;
    uStack_10 = 0;
    uStack_38 = **(undefined4 **)(DAT_0065a054[0x12] + 4);
    iStack_34 = ImageList_GetImageCount(himl);
    uStack_30 = 0;
    iStack_2c = aiStack_44[0];
    p_Stack_28 = himl;
    p_Stack_28 = (HIMAGELIST)(**(code **)(*DAT_0065a054 + 0x14))(1);
    p_Stack_28 = (HIMAGELIST)(**(code **)(*DAT_0065a054 + 0x14))(2);
    iStack_24 = ImageList_GetImageCount(*(HIMAGELIST *)(param_1 + 0x5c));
    uStack_18 = *(undefined4 *)(param_1 + 0x5c);
    uStack_20 = 0;
    iStack_1c = aiStack_44[0];
    uStack_10 = 0;
    uStack_14 = uStack_18;
    FUN_00581590(aiStack_44 + 1);
    return 0;
  }
  return 0x80004001;
}


