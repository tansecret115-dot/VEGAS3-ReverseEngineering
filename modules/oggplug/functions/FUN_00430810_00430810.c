/* Module: oggplug.dll
   Function: FUN_00430810
   Address: 00430810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_00430810(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char local_24 [36];
  
  pcVar4 = s_Xiphophorus_libVorbis_I_20010813_004510f8;
  pcVar5 = local_24;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar4;
  FUN_00441e10(param_1,3,8);
  FUN_004308e0(param_1,s_vorbis_004510f0);
  uVar3 = 0xffffffff;
  pcVar4 = local_24;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00441e10(param_1,~uVar3 - 1,0x20);
  FUN_004308e0(param_1,local_24);
  FUN_00441e10(param_1,param_2[2],0x20);
  if ((param_2[2] != 0) && (iVar2 = 0, 0 < param_2[2])) {
    do {
      if (*(int *)(*param_2 + iVar2 * 4) == 0) {
        FUN_00441e10(param_1,0,0x20);
      }
      else {
        FUN_00441e10(param_1,*(uint *)(param_2[1] + iVar2 * 4),0x20);
        FUN_004308e0(param_1,*(char **)(*param_2 + iVar2 * 4));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2[2]);
  }
  FUN_00441e10(param_1,1,1);
  return 0;
}


