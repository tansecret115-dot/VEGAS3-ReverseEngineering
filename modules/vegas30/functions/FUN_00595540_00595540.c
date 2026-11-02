/* Module: vegas30.exe
   Function: FUN_00595540
   Address: 00595540
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00595540(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  undefined4 *lpParameter;
  int iVar2;
  LPVOID pvVar3;
  HANDLE pvVar4;
  
  pvVar1 = GlobalAlloc(0x42,0x198);
  lpParameter = GlobalLock(pvVar1);
  if (lpParameter == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  iVar2 = _SfQueueInitialize_4(lpParameter + 3);
  if (iVar2 == 0) {
    return 0x8004e003;
  }
  iVar2 = _SfQueueInitialize_4(lpParameter + 0xc);
  if (iVar2 == 0) {
    return 0x8004e003;
  }
  lpParameter[0x47] = 0x100;
  lpParameter[0x55] = 0x80;
  lpParameter[99] = 0x80;
  lpParameter[0x48] = 0;
  lpParameter[0x56] = 0x800;
  lpParameter[100] = 0x4000;
  lpParameter[0x2a] = 0x60000;
  pvVar1 = GlobalAlloc(2,0x60000);
  pvVar3 = GlobalLock(pvVar1);
  lpParameter[0x29] = pvVar3;
  pvVar4 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,"TrackRender did something");
  lpParameter[0x27] = pvVar4;
  pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00598640,lpParameter,0,lpParameter + 1);
  *lpParameter = pvVar4;
  if (pvVar4 == (HANDLE)0x0) {
    return 0x8004e003;
  }
  *param_1 = lpParameter;
  _DAT_0064b170 = lpParameter;
  return 0;
}


