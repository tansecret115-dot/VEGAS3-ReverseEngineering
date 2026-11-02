/* Module: mcmpgdec.dll
   Function: FUN_10007d00
   Address: 10007d00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * __cdecl FUN_10007d00(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  
  iVar4 = 0;
  piVar1 = (int *)(param_1 + 0x66c);
  while( true ) {
    uVar3 = FUN_10003828((int)piVar1,'\v');
    if (0x17 < (int)uVar3) {
      if ((int)uVar3 < 0x400) {
        if ((int)uVar3 < 0x80) {
          FUN_10003858(piVar1,(int)(&PTR_FUN_10030b24)[uVar3 * 2]);
          puVar5 = (&PTR_LAB_10030b20)[uVar3 * 2] + iVar4;
        }
        else {
          iVar2 = ((int)uVar3 >> 6) * 8;
          FUN_10003858(piVar1,*(int *)(&DAT_10030b64 + iVar2));
          puVar5 = (undefined *)(iVar4 + *(int *)(&DAT_10030b60 + iVar2));
        }
      }
      else {
        FUN_10003858(piVar1,1);
        puVar5 = (undefined *)(iVar4 + 1);
      }
      return puVar5;
    }
    if (uVar3 != 0xf) {
      if (uVar3 != 8) {
        if (*(int *)(param_1 + 0x60) == 0) {
          FUN_1000bb3c(param_1,"Invalid macroblock_address_increment code");
        }
        *(undefined4 *)(param_1 + 0x5c) = 1;
        return (undefined *)0xffffffff;
      }
      iVar4 = iVar4 + 0x21;
    }
    param_2 = param_2 + -0xb;
    if (param_2 < 1) break;
    FUN_10003858(piVar1,0xb);
  }
  return (undefined *)0xffffffff;
}


