/* Module: wmfplug2.dll
   Function: FUN_0041da60
   Address: 0041da60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041da60(int *param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = param_1[2];
  iVar4 = 0;
  piVar3 = &DAT_00488a28;
  do {
    if (iVar1 == piVar3[2]) {
      bVar2 = true;
      if (iVar1 == 1) {
        if (*param_1 == 0) {
          bVar5 = *piVar3 == 0;
        }
        else {
          bVar5 = piVar3[3] == param_1[3];
        }
        bVar2 = *param_1 == 0 || *piVar3 != 0;
        if (bVar5) goto LAB_0041dac7;
        bVar2 = false;
LAB_0041da9e:
        if (param_1[1] != piVar3[1]) goto LAB_0041daac;
      }
      else {
LAB_0041dac7:
        if ((!bVar2) || (param_1[1] == 0)) goto LAB_0041da9e;
        if (piVar3[1] == 0) {
          bVar2 = false;
        }
        if ((iVar1 == 1) && (piVar3[4] != param_1[4])) goto LAB_0041daac;
      }
      if (bVar2) {
        iVar4 = iVar4 * 0x10;
        *param_2 = *(undefined4 *)(&DAT_00488938 + iVar4);
        param_2[1] = *(undefined4 *)(iVar4 + 0x48893c);
        param_2[2] = *(undefined4 *)(iVar4 + 0x488940);
        param_2[3] = *(undefined4 *)(iVar4 + 0x488944);
        return 0;
      }
    }
LAB_0041daac:
    piVar3 = piVar3 + 6;
    iVar4 = iVar4 + 1;
    if ((int *)0x488b8f < piVar3) {
      return 0x80004005;
    }
  } while( true );
}


