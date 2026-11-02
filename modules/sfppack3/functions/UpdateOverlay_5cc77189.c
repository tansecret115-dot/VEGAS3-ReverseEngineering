/* Module: sfppack3.dll
   Function: UpdateOverlay
   Address: 5cc77189
   Source: Ghidra pseudocode (Stage 10 batch) */


/* Library Function - Single Match
    public: virtual long __stdcall CAggDrawSurface::UpdateOverlay(struct tagRECT *,struct
   IDirectDrawSurface *,struct tagRECT *,unsigned long,struct _DDOVERLAYFX *)
   
   Library: Visual Studio 2012 Release */

long CAggDrawSurface::UpdateOverlay
               (tagRECT *param_1,IDirectDrawSurface *param_2,tagRECT *param_3,ulong param_4,
               _DDOVERLAYFX *param_5)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(int *)param_1[1].left + 0x84))
                    ((int *)param_1[1].left,param_2,param_3,param_4,param_5);
  return lVar1;
}


