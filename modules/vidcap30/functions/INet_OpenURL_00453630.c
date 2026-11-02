/* Module: vidcap30.exe
   Function: INet_OpenURL
   Address: 00453630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall INet_OpenURL(struct inetsession_tag *,void * *,char *,unsigned long) */

long INet_OpenURL(inetsession_tag *param_1,void **param_2,char *param_3,ulong param_4)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x53630  49  ?INet_OpenURL@@YGJPAUinetsession_tag@@PAPAXPADK@Z */
  piVar2 = (int *)0x0;
  iVar1 = InternetOpenUrlA(*(undefined4 *)(param_1 + 0x104),param_3,0,0,param_4,0);
  *piVar2 = iVar1;
  return (-(uint)(iVar1 != 0) & 0x7ffb1f13) + 0x8004e0ed;
}


