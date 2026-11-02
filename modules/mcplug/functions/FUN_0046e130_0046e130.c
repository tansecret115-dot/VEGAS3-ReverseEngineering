/* Module: mcplug.dll
   Function: FUN_0046e130
   Address: 0046e130
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0046e130(void *this,BYTE *param_1,BYTE *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_108;
  CHAR local_104 [260];
  
  uVar1 = FUN_00470590();
  iVar2 = FUN_004711d0(*(uint *)((int)this + 0x30),&local_108);
  if ((-1 < iVar2) && (uVar1 == local_108)) {
    return 0;
  }
  FUN_00471010(*(uint *)((int)this + 0x30),uVar1,local_104,0x104);
  if (*(char *)((int)this + 0x797) == '\0') {
    return -0x7fffbffb;
  }
  iVar3 = lstrcmpA(local_104,(LPCSTR)((int)this + 0x797));
  if (iVar3 == 0) {
    iVar2 = FUN_004712e0(*(uint *)((int)this + 0x30),uVar1,param_1,param_2);
  }
  return iVar2;
}


