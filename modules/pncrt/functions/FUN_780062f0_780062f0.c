/* Module: pncrt.dll
   Function: FUN_780062f0
   Address: 780062f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_780062f0(void *this,int *param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  
  *(undefined4 *)this = 0;
  uVar5 = *(uint *)((int)this + 4) & 0xffffff80;
  *(uint *)((int)this + 4) = uVar5;
  pcVar3 = (char *)*param_1;
  if (pcVar3 == (char *)0x0) {
    *(uint *)((int)this + 4) = uVar5 | 1;
  }
  else {
    if (*pcVar3 == '\0') {
      *(uint *)((int)this + 4) = uVar5 | 2;
      return this;
    }
    iVar4 = 0;
    do {
      cVar2 = *(char *)*param_1;
      if (cVar2 == param_2) break;
      if (((((cVar2 != '_') && (cVar2 != '$')) && ((cVar2 < 'a' || ('z' < cVar2)))) &&
          ((cVar2 < 'A' || ('Z' < cVar2)))) && ((cVar2 < '0' || ('9' < cVar2)))) {
        *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffff1 | 1;
        return this;
      }
      pcVar1 = (char *)*param_1 + 1;
      iVar4 = iVar4 + 1;
      *param_1 = (int)pcVar1;
    } while (*pcVar1 != '\0');
    FUN_78006c60(this,pcVar3,iVar4);
    cVar2 = *(char *)*param_1;
    if (cVar2 != '\0') {
      *param_1 = (int)((char *)*param_1 + 1);
      if (cVar2 != param_2) {
        *(undefined4 *)this = 0;
        *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffff3 | 3;
        return this;
      }
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffff0;
      return this;
    }
    if ((*(uint *)((int)this + 4) & 0xf) == 0) {
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffff2 | 2;
      return this;
    }
  }
  return this;
}


