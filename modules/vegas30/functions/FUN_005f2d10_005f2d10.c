/* Module: vegas30.exe
   Function: FUN_005f2d10
   Address: 005f2d10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_005f2d10(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  int *unaff_EDI;
  int *piVar4;
  int local_22c;
  int *local_228;
  undefined1 auStack_224 [8];
  int local_21c;
  CHAR local_218 [252];
  int iStack_11c;
  int local_10c;
  undefined1 local_104 [260];
  
  iVar2 = param_1 + 0x170;
  iVar1 = FUN_005f03a0(iVar2);
  if (iVar1 == 0) {
    return iVar2;
  }
  FUN_005f06b0(iVar2,&local_21c);
  if (local_21c == 1) {
    local_22c = 0;
    iVar2 = FUN_005f68f0(&local_228);
    if (-1 < iVar2) {
      piVar4 = &local_22c;
      (**(code **)*local_228)(local_228,&DAT_00610db0);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x1c))(piVar4,&stack0xfffffdd0);
        piVar4 = (int *)0x104;
        (**(code **)(*local_228 + 0x54))(local_228,&local_22c);
        (**(code **)(*piVar4 + 8))(piVar4);
        iStack_11c = local_22c;
        SfPrintF(param_1 + 0x274,"%s %I64d",auStack_224,unaff_ESI,local_22c);
      }
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
    return param_1 + 0x274;
  }
  if (local_21c != 2) {
    *(undefined1 *)(param_1 + 0x274) = 0;
    return param_1 + 0x274;
  }
  iVar2 = FUN_005f97a0(local_104,local_218,local_10c + -1);
  if (iVar2 != 0) {
    uVar3 = _SfGetFileNamePtrA_4(local_104);
    SfPrintF(param_1 + 0x274,"%s - %s",local_218,uVar3);
    return param_1 + 0x274;
  }
  lstrcpynA((LPSTR)(param_1 + 0x274),local_218,0x248);
  *(undefined1 *)(param_1 + 0x4bb) = 0;
  return param_1 + 0x274;
}


