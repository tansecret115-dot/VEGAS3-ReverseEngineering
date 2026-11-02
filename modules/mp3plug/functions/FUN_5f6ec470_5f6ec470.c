/* Module: mp3plug.dll
   Function: FUN_5f6ec470
   Address: 5f6ec470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined ** __cdecl FUN_5f6ec470(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  int unaff_EBP;
  
  iVar1 = FUN_5f6d9760(0x30);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    iVar2 = FUN_5f6ebfd0((int)param_3);
    *(int *)(iVar1 + 0xc) = iVar2;
    iVar2 = FUN_5f6ec010((int)param_3);
    *(int *)(iVar1 + 8) = iVar2;
    *(undefined4 *)(iVar1 + 4) = *param_3;
    uVar3 = FUN_5f6d9760(0x58);
    *(undefined4 *)(iVar1 + 0x10) = uVar3;
    iVar2 = iVar1 + 0xc;
    do {
      uVar3 = FUN_5f6d9760(0x34);
      *(undefined4 *)(iVar1 + 0x14) = uVar3;
      iVar1 = iVar1 + 4;
    } while (iVar1 < iVar2);
    uVar3 = FUN_5f6d9760(0x5f6ec53f);
    *(undefined4 *)(unaff_EBP + 0x20) = uVar3;
    iVar1 = unaff_EBP + 0xc;
    do {
      uVar3 = FUN_5f6d9760(0x34);
      *(undefined4 *)(unaff_EBP + 0x24) = uVar3;
      unaff_EBP = unaff_EBP + 4;
    } while (unaff_EBP < iVar1);
    return (undefined **)0x0;
  }
  ppuVar4 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d990,(char *)0x41,(undefined *)0x0,
                         s_out_of_memory_5f75c330);
  return ppuVar4;
}


