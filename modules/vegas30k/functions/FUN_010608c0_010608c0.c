/* Module: vegas30k.dll
   Function: FUN_010608c0
   Address: 010608c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010608c0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint unaff_retaddr;
  
  piVar3 = param_1;
  if (param_1[6] != 0) {
    return -0x7fffbffb;
  }
  iVar5 = FUN_0105fae0();
  if (-1 < iVar5) {
    iVar5 = (**(code **)(*piVar3 + 0x20))(piVar3,1);
    piVar4 = param_1;
    if (-1 < iVar5) {
      uVar2 = piVar3[0x9b];
      iVar5 = piVar3[0x9c];
      uVar1 = piVar3[0x9d] - 1;
      uVar6 = __aulldiv(uVar1 + unaff_retaddr,(int)param_1 + (uint)CARRY4(uVar1,unaff_retaddr),
                        piVar3[0x9d],0);
      lVar7 = __allmul((uVar2 >> 3) * iVar5 * 2,0,uVar6);
      param_1 = (int *)(lVar7 + (ulonglong)(uint)piVar3[0x99] >> 0x20);
      SetFilePointer((HANDLE)piVar3[0x96],(LONG)(lVar7 + (ulonglong)(uint)piVar3[0x99]),
                     (PLONG)&param_1,0);
      SetEndOfFile((HANDLE)piVar3[0x96]);
      piVar3[0x9e] = unaff_retaddr;
      piVar3[0x9f] = (int)piVar4;
      piVar3[0xab] = 1;
      iVar5 = FUN_0105fcb0();
      FUN_01060b00(0);
    }
  }
  return iVar5;
}


