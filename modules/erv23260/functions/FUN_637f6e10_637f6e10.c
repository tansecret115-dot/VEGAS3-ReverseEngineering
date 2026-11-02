/* Module: erv23260.dll
   Function: FUN_637f6e10
   Address: 637f6e10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_637f6e10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar5 = 2;
  do {
    iVar6 = -0x100;
    local_8 = 0x100;
    local_c = param_1 + 0xff;
    iVar7 = -0x200;
    iVar3 = 0x200;
    do {
      iVar2 = iVar3;
      iVar1 = local_8;
      if (iVar3 < 1) {
        iVar2 = iVar7;
        iVar1 = iVar6;
      }
      if (iVar2 - iVar5 < 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar3;
        if (iVar3 < 1) {
          iVar2 = iVar7;
        }
        iVar2 = iVar2 - iVar5;
      }
      if (iVar1 - iVar2 < 0) {
        cVar4 = '\0';
      }
      else {
        iVar2 = iVar3;
        iVar1 = local_8;
        if (iVar3 < 1) {
          iVar2 = iVar7;
          iVar1 = iVar6;
        }
        if (iVar2 - iVar5 < 0) {
          cVar4 = '\0';
        }
        else {
          iVar2 = iVar3;
          if (iVar3 < 1) {
            iVar2 = iVar7;
          }
          cVar4 = (char)iVar2 - (char)iVar5;
        }
        cVar4 = (char)iVar1 - cVar4;
      }
      bVar8 = -1 < iVar6;
      iVar7 = iVar7 + 2;
      iVar3 = iVar3 + -2;
      iVar6 = iVar6 + 1;
      *(byte *)(local_c + -199) = ((bVar8 - 1U & 0xfe) + 1) * cVar4;
      local_8 = local_8 + -1;
      local_c = local_c + 1;
    } while (-0x200 < iVar3);
    iVar5 = iVar5 + 2;
    param_1 = param_1 + 0x1ff;
  } while (iVar5 < 0x1a);
  return;
}


