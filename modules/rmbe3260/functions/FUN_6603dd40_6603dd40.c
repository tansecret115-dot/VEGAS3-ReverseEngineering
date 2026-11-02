/* Module: rmbe3260.dll
   Function: FUN_6603dd40
   Address: 6603dd40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6603dd40(void *this,int param_1,char *param_2,undefined4 param_3)

{
  bool bVar1;
  FILE *_File;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != (char *)0x0) {
    bVar1 = false;
    iVar4 = 0xfff4;
    _File = fopen(param_2,&DAT_6606e308);
    if (_File != (FILE *)0x0) {
      fclose(_File);
      iVar2 = remove(param_2);
      if (iVar2 != 0) {
        bVar1 = true;
      }
    }
    if (!bVar1) {
      piVar3 = FUN_6602f640(param_2);
      *(int **)((int)this + 0x20) = piVar3;
      if ((piVar3 != (int *)0x0) && (piVar3[9] == 0)) {
        iVar4 = 0;
      }
    }
  }
  if ((iVar4 == 0) && (param_1 != 0)) {
    *(undefined4 *)((int)this + 0x78) = 1;
    *(int *)((int)this + 0x28) = param_1;
    piVar3 = FUN_6602f6d0(param_1,param_3);
    *(int **)((int)this + 0x18) = piVar3;
    if (piVar3 != (int *)0x0) {
      if (piVar3[9] == 0) {
        piVar3[0x2a] = 0;
        return 0;
      }
      iVar4 = 0xfff4;
    }
  }
  return iVar4;
}


