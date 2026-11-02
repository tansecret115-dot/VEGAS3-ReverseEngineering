/* Module: cook3260.dll
   Function: FUN_633a5bf0
   Address: 633a5bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_633a5bf0(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  if (DAT_633b1c1c == 0) {
    DAT_633b1c1c = 1;
    pcVar2 = 
    "hjiihhhhhhggghiklmooppppnljiihgggggghikmopqsssttpnljihhhhhhggghhiikmoqrrqnmmkkiihggggghhhikmoqqqpqnljjiihhggggghiijkmorrpomllkihhggggghhiiklnqrrstspnljihgggfghiikmoqtttrronmkkiihggfgghikmmprssmmmlkjihgggggghijklnopqqrpnljjihgggggghijllmorrrqnmljjihhhggfghijlmmoprrtqpomjiihhhgfgghiklnrtttqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrqrrrnlkkihggfgghiikmorrrehjjkklllmmnoohijkkllmmmmnooijkllmmmmnnnopjklmmmmnnnnopqkklmmmnnnnoopqllmmmnnnnoopqrllmmnnoooppqqsllmmnnoooppqrsmmmnnnoopqprstmmnnnnopprrttcmmnnoopqqrrscVnnnooppqsstUVcooopqqqsttVcUVoopqqrsttVcVcU"
    ;
    iVar3 = 0;
    do {
      iVar1 = FUN_633a5b20((int)pcVar2,(int)&DAT_633afa30 + iVar3,
                           (int *)((int)&DAT_633ac7a0 + iVar3),0x18);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      pcVar2 = pcVar2 + 0x18;
      iVar3 = iVar3 + 0x60;
    } while (pcVar2 < 
             "ehjjkklllmmnoohijkkllmmmmnooijkllmmmmnnnopjklmmmmnnnnopqkklmmmnnnnoopqllmmmnnnnoopqrllmmnnoooppqqsllmmnnoooppqrsmmmnnnoopqprstmmnnnnopprrttcmmnnoopqqrrscVnnnooppqsstUVcooopqqqsttVcUVoopqqrsttVcVcU"
            );
    iVar3 = 0;
    do {
      iVar1 = FUN_633a5b20(*(int *)((int)&
                                         PTR_s_ehjjkklllmmnoohijkkllmmmmnooijkl_633a80f0_0x4b0_633a8b98
                                   + iVar3),*(int *)((int)&PTR_DAT_633a9898 + iVar3),
                           *(int **)((int)&PTR_DAT_633a9878 + iVar3),
                           *(int *)((int)&DAT_633a98b8 + iVar3));
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x1c);
  }
  if ((*(int *)(param_1 + 8) == 2) &&
     (iVar3 = FUN_633a5b20(*(int *)(&DAT_633a8c30 + *(int *)(param_1 + 0x1c) * 4),param_1 + 0x469c,
                           (int *)(param_1 + 0x45a0),
                           (1 << ((byte)*(int *)(param_1 + 0x1c) & 0x1f)) + -1), iVar3 != 0)) {
    return 0xffffffff;
  }
  return 0;
}


