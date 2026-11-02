/* Module: vegas30.exe
   Function: FUN_005f0d90
   Address: 005f0d90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005f0d90(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  ULARGE_INTEGER *unaff_EDI;
  int **ppiVar3;
  IStream *local_220;
  int *local_21c;
  CHAR local_218 [259];
  undefined1 local_115;
  undefined1 local_114 [16];
  CHAR local_104 [260];
  
  ppiVar3 = &local_21c;
  for (iVar2 = 0x46; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppiVar3 = (int *)0x0;
    ppiVar3 = ppiVar3 + 1;
  }
  *param_1 = 0;
  iVar2 = FUN_005f06b0(param_2 + 0x170,&local_21c);
  if (-1 < iVar2) {
    FUN_005f55e0(local_218,0x104,local_104,local_114,0);
    lstrcpynA(local_218,local_104,0x104);
    local_115 = 0;
    FUN_005f0420(&local_21c,0x104,local_104);
    iVar2 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_220);
    if (-1 < iVar2) {
      FUN_005c3d90(local_220,local_104);
      (*local_220->lpVtbl->Seek)(local_220,(LARGE_INTEGER)0x0,0,unaff_EDI);
      uVar1 = FUN_005ec620();
      iVar2 = FUN_005c4410(local_21c,uVar1,param_1,0,0,0,0,1);
      (**(code **)(*local_21c + 8))(local_21c);
    }
  }
  return iVar2;
}


