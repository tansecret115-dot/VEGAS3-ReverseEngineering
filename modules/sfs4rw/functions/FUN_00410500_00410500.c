/* Module: sfs4rw.dll
   Function: FUN_00410500
   Address: 00410500
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00410500(void *this,LPCSTR param_1,undefined4 *param_2)

{
  LPCSTR pCVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  void *local_4;
  
  local_4 = this;
  puVar2 = (uint *)FUN_00401200(0x30);
  pCVar1 = param_1;
  if (puVar2 == (uint *)0x0) {
    *param_2 = 0;
    return -0x7ff8fff2;
  }
  *puVar2 = *(uint *)((int)this + 0x30);
  lstrcpynA((LPSTR)&local_4,param_1,3);
  local_4._0_3_ = (uint3)(ushort)local_4;
  uVar3 = FUN_00419070((char *)&local_4);
  if (uVar3 == *(uint *)((int)this + 0x30)) {
    iVar4 = FUN_004106c0(this,pCVar1,1,1,(char *)0x0,puVar2);
    if (-1 < iVar4) {
      iVar4 = FUN_004107b0(1,(char *)0x0,puVar2);
      if (-1 < iVar4) goto LAB_00410617;
    }
    if (*(int *)((int)this + 0x2c) != 0) {
      iVar4 = FUN_004106c0(this,pCVar1,0,1,(char *)0x0,puVar2);
      if (-1 < iVar4) {
        iVar4 = FUN_004107b0(1,(char *)0x0,puVar2);
        if (-1 < iVar4) goto LAB_00410617;
      }
    }
    FUN_004102d0(this,(undefined1 *)&param_1);
    iVar4 = FUN_004106c0(this,pCVar1,1,1,(char *)&param_1,puVar2);
    if (-1 < iVar4) {
      iVar4 = FUN_004107b0(1,(char *)&param_1,puVar2);
      if (-1 < iVar4) {
        puVar2[0xb] = 1;
        *param_2 = puVar2;
        return iVar4;
      }
    }
  }
  else {
    iVar4 = -0x7ffb1ecd;
  }
  FUN_00401220(puVar2);
  puVar2 = (uint *)0x0;
LAB_00410617:
  *param_2 = puVar2;
  return iVar4;
}


