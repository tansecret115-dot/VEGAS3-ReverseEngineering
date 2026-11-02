/* Module: sfcd.cdd
   Function: FUN_00415ce0
   Address: 00415ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00415ce0(int param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  CHAR *lpString2;
  CHAR local_400 [256];
  char local_300 [256];
  CHAR local_200 [512];
  
  if (*(int *)(param_1 + 0x4a) == 1) {
    *(undefined4 *)(param_1 + 0x46) = 0x6b;
    lpString2 = PTR_s_This_drive_requires_the_start_ti_0043f318;
    if (param_2 == (LPSTR)0x0) {
      return 0;
    }
  }
  else {
    cdr_LoadSenseString(*(byte *)(param_1 + 0x16) & 0xf,local_300,0x100);
    iVar3 = 0;
    ppuVar2 = (undefined **)&DAT_0043edf8;
    do {
      if (*ppuVar2 == (undefined *)(uint)*(byte *)(param_1 + 0x20)) {
        iVar1 = *(int *)(iVar3 * 0x10 + 0x43ee00);
        *(undefined4 *)(param_1 + 0x46) = *(undefined4 *)(iVar3 * 0x10 + 0x43ee04);
        cdr_LoadSenseString(iVar1,local_400,0x100);
        goto LAB_00415d47;
      }
      ppuVar2 = ppuVar2 + 4;
      iVar3 = iVar3 + 1;
    } while (ppuVar2 < &PTR_s_This_drive_requires_the_start_ti_0043f318);
    wsprintfA(local_400,"Unknown Additional Sense %02x %02x",
              (undefined *)(uint)*(byte *)(param_1 + 0x20),(uint)*(byte *)(param_1 + 0x21));
LAB_00415d47:
    wsprintfA(local_200,"%s\r\n%s\r\n",local_300,local_400);
    if (param_2 == (LPSTR)0x0) {
      return 0;
    }
    lpString2 = local_200;
  }
  lstrcpynA(param_2,lpString2,param_3);
  param_2[param_3 + -1] = '\0';
  return 0;
}


